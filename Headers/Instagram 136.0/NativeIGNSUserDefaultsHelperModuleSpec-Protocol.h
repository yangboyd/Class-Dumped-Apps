//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/RCTBridgeModule-Protocol.h>
#import <InstagramAppCoreFramework/RCTTurboModule-Protocol.h>

@class NSString;

@protocol NativeIGNSUserDefaultsHelperModuleSpec <RCTBridgeModule, RCTTurboModule>
- (void)setBoolValue:(_Bool)arg1 key:(NSString *)arg2;
- (void)getBoolValueForKey:(NSString *)arg1 callback:(void (^)(NSArray *))arg2;
@end

