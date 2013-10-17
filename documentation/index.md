# android_zero_table_view_separator Module

## Description

Hide table view separators on Android

## Accessing the android_zero_table_view_separator Module

To access this module from JavaScript, you would do the following:

	var android_zero_table_view_separator = require("com.exygy.androidzerotableviewseparator");

The android_zero_table_view_separator variable is a reference to the Module object.	

## Reference

	var tableView = Ti.UI.createTableView({
		data:data,
		backgroundColor: colors.purple,
		separatorColor:  "transparent"
	});

	android_zero_table_view_separator.hideTableRowSepartor(tableView);

## Author

Pierre Hunault - Exygy

## License

Apache License