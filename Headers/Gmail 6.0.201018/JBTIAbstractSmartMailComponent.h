//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTSmartMailComponent-Protocol.h"

@class JBTIActionsHelper, JBTISmartMailComponentContextImpl, JBTSmartMailComponent_Type, JCSAssignedId, NSString;
@protocol ComGoogleCommonTimeClock, JBTIFormattedTextParser, JBTISmartMailCommandApplier, JBTISmartMailTranslationHelper, JavaUtilList;

@interface JBTIAbstractSmartMailComponent : NSObject <JBTSmartMailComponent>
{
    id <JavaUtilList> actionProtos_;
    id <JBTISmartMailCommandApplier> commandApplier_;
    JBTISmartMailComponentContextImpl *smartMailContextImpl_;
    id <ComGoogleCommonTimeClock> clock_;
    id <JBTIFormattedTextParser> formattedTextParser_;
    id <JBTISmartMailTranslationHelper> translationHelper_;
    JBTIActionsHelper *actionsHelper_;
    JBTSmartMailComponent_Type *type_;
    JCSAssignedId *assignedId_;
}

+ (void)initialize;
- (void)dealloc;
- (_Bool)usesLegacyTypedSmartmailProto;
- (void)recordViewWithJBTSmartMailComponent_ViewMode:(id)arg1;
- (id)getSortTime;
- (id)getContext;
- (void)addAdditionalActionsWithComGoogleCommonCollectImmutableList_Builder:(id)arg1;
- (id)getActions;
- (id)getActionsForViewWithJBTSmartMailComponent_ViewMode:(id)arg1;
- (id)getType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

