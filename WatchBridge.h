// RNCookieManagerIOS.h
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>

@import WatchConnectivity;


@interface WatchBridge : RCTEventEmitter <RCTBridgeModule, WCSessionDelegate>
+ (id)allocWithZone:(NSZone *)zone;
+ (WatchBridge*)init;
@property (nonatomic, strong) WCSession* session;
@property (nonatomic, strong) NSMutableDictionary* replyHandlers;
@property (nonatomic, strong) NSMutableDictionary* transfers;
@property (nonatomic, strong) NSDictionary<NSString*, id>* userInfo;
@end
