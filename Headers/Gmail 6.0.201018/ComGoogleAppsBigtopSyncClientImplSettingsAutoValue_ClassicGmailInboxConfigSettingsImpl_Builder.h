//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplSettingsClassicGmailInboxConfigSettingsImpl_Builder.h"

@class ComGoogleCommonCollectImmutableSet, JBTClassicGmailInboxConfigSettings_InboxUnreadCountType, JBTClassicGmailInboxConfigSettings_MultipleInboxOrientationType, JBTClassicGmailInboxConfigSettings_PriorityInboxType, JBTClassicGmailInboxSection_ClassicGmailInboxType, JavaLangBoolean, JavaLangDouble, JavaLangInteger;
@protocol JavaUtilList;

@interface ComGoogleAppsBigtopSyncClientImplSettingsAutoValue_ClassicGmailInboxConfigSettingsImpl_Builder : ComGoogleAppsBigtopSyncClientImplSettingsClassicGmailInboxConfigSettingsImpl_Builder
{
    JBTClassicGmailInboxSection_ClassicGmailInboxType *inboxType_;
    id <JavaUtilList> inboxSections_;
    ComGoogleCommonCollectImmutableSet *allowedInboxTypesInternal_;
    JavaLangBoolean *sectionedInboxIncludeStarredInPrimaryInternal_;
    JavaLangBoolean *sectionedInboxEnableBundlingInPromotionsInternal_;
    JBTClassicGmailInboxConfigSettings_PriorityInboxType *priorityInboxTypeInternal_;
    JBTClassicGmailInboxConfigSettings_InboxUnreadCountType *priorityInboxUnreadCountTypeInternal_;
    JBTClassicGmailInboxConfigSettings_MultipleInboxOrientationType *multipleInboxOrientationTypeInternal_;
    JavaLangInteger *multipleInboxCustomSectionsSizeInternal_;
    JavaLangDouble *multipleInboxPercentageCustomPaneOnBottomInternal_;
    JavaLangDouble *multipleInboxPercentageCustomPaneOnTopInternal_;
    JavaLangDouble *multipleInboxPercentageCustomPaneOnRightInternal_;
}

- (void)dealloc;
- (id)autoBuild;
- (id)setMultipleInboxPercentageCustomPaneOnRightInternalWithDouble:(double)arg1;
- (id)setMultipleInboxPercentageCustomPaneOnTopInternalWithDouble:(double)arg1;
- (id)setMultipleInboxPercentageCustomPaneOnBottomInternalWithDouble:(double)arg1;
- (id)setMultipleInboxCustomSectionsSizeInternalWithInt:(int)arg1;
- (id)setMultipleInboxOrientationTypeInternalWithJBTClassicGmailInboxConfigSettings_MultipleInboxOrientationType:(id)arg1;
- (id)setPriorityInboxUnreadCountTypeInternalWithJBTClassicGmailInboxConfigSettings_InboxUnreadCountType:(id)arg1;
- (id)getPriorityInboxTypeInternal;
- (id)setPriorityInboxTypeInternalWithJBTClassicGmailInboxConfigSettings_PriorityInboxType:(id)arg1;
- (id)setSectionedInboxEnableBundlingInPromotionsInternalWithBoolean:(_Bool)arg1;
- (id)setSectionedInboxIncludeStarredInPrimaryInternalWithBoolean:(_Bool)arg1;
- (id)setAllowedInboxTypesInternalWithComGoogleCommonCollectImmutableSet:(id)arg1;
- (id)setInboxSectionsWithJavaUtilList:(id)arg1;
- (id)getInboxType;
- (id)setInboxTypeWithJBTClassicGmailInboxSection_ClassicGmailInboxType:(id)arg1;

@end

