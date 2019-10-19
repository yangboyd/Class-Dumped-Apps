//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AdjustDelegate.h"

@class NSString;

@interface AdjustUnityDelegate : NSObject <AdjustDelegate>
{
    _Bool _shouldLaunchDeferredDeeplink;
    NSString *_adjustUnitySceneName;
}

+ (void)teardown;
+ (id)getInstanceWithSwizzleOfAttributionCallback:(_Bool)arg1 eventSuccessCallback:(_Bool)arg2 eventFailureCallback:(_Bool)arg3 sessionSuccessCallback:(_Bool)arg4 sessionFailureCallback:(_Bool)arg5 deferredDeeplinkCallback:(_Bool)arg6 shouldLaunchDeferredDeeplink:(_Bool)arg7 withAdjustUnitySceneName:(id)arg8;
@property(copy, nonatomic) NSString *adjustUnitySceneName; // @synthesize adjustUnitySceneName=_adjustUnitySceneName;
@property(nonatomic) _Bool shouldLaunchDeferredDeeplink; // @synthesize shouldLaunchDeferredDeeplink=_shouldLaunchDeferredDeeplink;
- (void).cxx_destruct;
- (void)addValueOrEmpty:(id)arg1 forKey:(id)arg2 toDictionary:(id)arg3;
- (void)swizzleOriginalSelector:(SEL)arg1 withSelector:(SEL)arg2;
- (_Bool)adjustDeeplinkResponseWannabe:(id)arg1;
- (void)adjustSessionTrackingFailedWannabe:(id)arg1;
- (void)adjustSessionTrackingSucceededWannabe:(id)arg1;
- (void)adjustEventTrackingFailedWannabe:(id)arg1;
- (void)adjustEventTrackingSucceededWannabe:(id)arg1;
- (void)adjustAttributionChangedWannabe:(id)arg1;
- (id)init;

@end

