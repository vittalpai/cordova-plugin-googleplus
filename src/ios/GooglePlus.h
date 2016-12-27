#import <Cordova/CDVPlugin.h>
#import <GoogleSignIn/GoogleSignIn.h>

@interface GooglePlus : CDVPlugin<GIDSignInDelegate, GIDSignInUIDelegate>

@property (nonatomic, copy) NSString* callbackId;
@property (nonatomic, assign) BOOL isSigningIn;

+ (BOOL) isSigningIn;
+ (void) isSigningIn:(BOOL)value;
- (void) isAvailable:(CDVInvokedUrlCommand*)command;
- (void) login:(CDVInvokedUrlCommand*)command;
- (void) trySilentLogin:(CDVInvokedUrlCommand*)command;
- (void) logout:(CDVInvokedUrlCommand*)command;
- (void) disconnect:(CDVInvokedUrlCommand*)command;
- (void) share_unused:(CDVInvokedUrlCommand*)command;

@end
