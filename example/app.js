// This is a test harness for your module
// You should do something interesting in this harness 
// to test out the module and to provide instructions 
// to users on how to use it by example.


// open a single window
var win = Ti.UI.createWindow({
	backgroundColor:'white'
});
var label = Ti.UI.createLabel();
win.add(label);
win.open();

// TODO: write your module tests here
var android_zero_table_view_separator = require('com.exygy.androidzerotableviewseparator');
Ti.API.info("module is => " + android_zero_table_view_separator);

label.text = android_zero_table_view_separator.example();

Ti.API.info("module exampleProp is => " + android_zero_table_view_separator.exampleProp);
android_zero_table_view_separator.exampleProp = "This is a test value";

if (Ti.Platform.name == "android") {
	var proxy = android_zero_table_view_separator.createExample({
		message: "Creating an example Proxy",
		backgroundColor: "red",
		width: 100,
		height: 100,
		top: 100,
		left: 150
	});

	proxy.printMessage("Hello world!");
	proxy.message = "Hi world!.  It's me again.";
	proxy.printMessage("Hello world!");
	win.add(proxy);
}

