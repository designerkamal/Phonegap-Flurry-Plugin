FlurryPlugin = function()
{
    
};
FlurryPlugin.prototype.logPageView = function()
{
    PhoneGap.exec(null,null,"com.phonegap.flurry","logPageView");
};
FlurryPlugin.prototype.logEvent = function(name)
{
    PhoneGap.exec(null,null,"com.phonegap.flurry","logEvent",[name]);
};

PhoneGap.addConstructor(function() 
{
    if(!window.plugins)
    {
        window.plugins = {};
    }
    window.plugins.flurry = new FlurryPlugin();
});
