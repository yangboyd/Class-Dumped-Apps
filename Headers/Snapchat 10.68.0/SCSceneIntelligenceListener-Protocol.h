//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SCLensSceneIntelligenceController, SCPNSceneIntResponse;
@protocol SCSIBackendRequest;

@protocol SCSceneIntelligenceListener <NSObject>
- (void)sceneIntelligenceController:(SCLensSceneIntelligenceController *)arg1 request:(id <SCSIBackendRequest>)arg2 failedWithError:(NSError *)arg3;
- (void)sceneIntelligenceController:(SCLensSceneIntelligenceController *)arg1 request:(id <SCSIBackendRequest>)arg2 receivedResponse:(SCPNSceneIntResponse *)arg3;
- (void)sceneIntelligenceController:(SCLensSceneIntelligenceController *)arg1 willProcessRequest:(id <SCSIBackendRequest>)arg2;
@end

