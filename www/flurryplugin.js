FlurryPlugin = function()
{
    
};
FlurryPlugin.prototype.pageView = function()
{
    cordova.exec(null,null,"FlurryPlugin","logPageView",[]);
};
FlurryPlugin.prototype.logEvent = function(name)
{
    cordova.exec(null,null,"FlurryPlugin","logEvent",[name]);
};

cordova.addConstructor(function() {
					   
	/* shim to work in 1.5 and 1.6  */
	if (!window.Cordova) {
	window.Cordova = cordova;
	};

	if(!window.plugins) window.plugins = {};
		window.plugins.FlurryPlugin = new FlurryPlugin();
});