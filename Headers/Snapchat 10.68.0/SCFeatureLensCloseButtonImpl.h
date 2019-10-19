//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureLensCloseButton-Protocol.h"

@class NSString, NSUUID, SCARBarItem;
@protocol SCFeatureLensCloseButtonDelegate;

@interface SCFeatureLensCloseButtonImpl : SCFeature <SCFeatureLensCloseButton>
{
    id <SCFeatureLensCloseButtonDelegate> delegate;
    NSUUID *_uuid;
}

@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak id <SCFeatureLensCloseButtonDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)hideOriginalUIForDisplayInARBar:(id)arg1;
- (void)deactivateFromARBar:(id)arg1;
- (void)restoreFromARBar:(id)arg1;
- (void)cancelPrepareForActivationFromARBar:(id)arg1;
- (_Bool)activateFromPoint:(struct CGPoint)arg1 gestureRecognizer:(id)arg2 arBar:(id)arg3;
- (void)prepareForActivationFromPoint:(struct CGPoint)arg1 gestureRecognizer:(id)arg2 arBar:(id)arg3;
@property(readonly, nonatomic) SCARBarItem *arBarItem;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

