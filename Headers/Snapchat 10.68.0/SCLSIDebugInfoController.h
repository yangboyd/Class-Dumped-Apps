//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSceneIntelligenceListener-Protocol.h"

@class NSString, SCPNSceneIntResponse;
@protocol SCLSIDebugInfoPresenter;

@interface SCLSIDebugInfoController : NSObject <SCSceneIntelligenceListener>
{
    id <SCLSIDebugInfoPresenter> _presenter;
    SCPNSceneIntResponse *_response;
    SCPNSceneIntResponse *_sceneIntResponse;
}

@property(readonly, nonatomic) SCPNSceneIntResponse *sceneIntResponse; // @synthesize sceneIntResponse=_sceneIntResponse;
- (void).cxx_destruct;
- (_Bool)isPointInsideDebugInfoUI:(struct CGPoint)arg1;
- (void)sceneIntelligenceController:(id)arg1 request:(id)arg2 failedWithError:(id)arg3;
- (void)sceneIntelligenceController:(id)arg1 request:(id)arg2 receivedResponse:(id)arg3;
- (void)sceneIntelligenceController:(id)arg1 willProcessRequest:(id)arg2;
- (void)deactivate;
- (void)configureWithPresenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

