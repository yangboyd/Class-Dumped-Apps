//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTButtonAction-Protocol.h"

@class ComGoogleAppsBigtopServicesCommonUtilsCachedValue, ComGoogleCaribouSmartmailButtonAction, JBTIActionsHelper, JBTISmartMailComponentContextImpl, JCSAssignedId, NSString;
@protocol ComGoogleCommonTimeClock, JBTISmartMailCommandApplier;

@interface JBTIButtonActionImpl : NSObject <JBTButtonAction>
{
    ComGoogleCaribouSmartmailButtonAction *buttonActionProto_;
    id <ComGoogleCommonTimeClock> clock_;
    id <JBTISmartMailCommandApplier> commandApplier_;
    JBTISmartMailComponentContextImpl *smartMailContext_;
    JCSAssignedId *clickableThingId_;
    JBTIActionsHelper *actionsHelper_;
    ComGoogleAppsBigtopServicesCommonUtilsCachedValue *cachedImage_;
}

- (void)dealloc;
- (id)getAckText;
- (id)click;
- (void)clickWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (id)clickWithJBTSpan:(id)arg1;
- (id)getImage;
- (id)getStyle;
- (_Bool)isRepeatable;
- (_Bool)requiresConfirmation;
- (id)getButtonText;
- (_Bool)isClicked;
- (id)getLoggingId;
- (id)getActionType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

