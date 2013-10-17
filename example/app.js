var osname = Ti.Platform.osname;
var isAndroid = (osname === 'android');

var win = Ti.UI.createWindow({
    backgroundColor: "#FFFFFF",
    windowTitle: 'Example',
    orientationModes: [Titanium.UI.PORTRAIT]
});

var data = [
    {title:'Row 1', backgroundColor:'red',    selectedColor:'#fff'},
    {title:'Row 2', backgroundColor:'green',  selectedColor:'#fff'},
    {title:'Row 3', backgroundColor:'blue',   selectedColor:'#fff'},
    {title:'Row 4', backgroundColor:'orange', selectedColor:'#fff'}
];

// IOS: separatorColor:  "transparent" will result in hiding the separators
// Android: separatorColor:  "transparent" will result in having the separators transparent and so see the background behind 
var tableView = Ti.UI.createTableView({
	data:data,
	backgroundColor: "white",
	separatorColor:  "transparent"
});

// the module hides the separators == match iOs behavior
if(isAndroid){
	var androidzerotableviewseparator = require('com.exygy.androidzerotableviewseparator');
	androidzerotableviewseparator.hideTableRowSepartor(tableView);
}
win.add(tableView);
win.open();
