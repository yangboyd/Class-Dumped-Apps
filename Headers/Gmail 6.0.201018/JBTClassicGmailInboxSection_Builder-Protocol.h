//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class JBTClassicGmailInboxSection_ClassicGmailInboxSectionType, NSString;
@protocol JBTClassicGmailInboxSection, JBTClassicGmailInboxSection_Builder;

@protocol JBTClassicGmailInboxSection_Builder <JavaObject>
- (id <JBTClassicGmailInboxSection>)build;
- (id <JBTClassicGmailInboxSection_Builder>)setMultipleInboxCustomSectionCollapsedWithBoolean:(_Bool)arg1;
- (id <JBTClassicGmailInboxSection_Builder>)setMultipleInboxCustomSectionTitleWithNSString:(NSString *)arg1;
- (id <JBTClassicGmailInboxSection_Builder>)setMultipleInboxCustomSearchQueryWithNSString:(NSString *)arg1;
- (id <JBTClassicGmailInboxSection_Builder>)setPriorityInboxCustomDisplayNameWithNSString:(NSString *)arg1;
- (id <JBTClassicGmailInboxSection_Builder>)setPriorityInboxCustomLabelIdWithNSString:(NSString *)arg1;
- (id <JBTClassicGmailInboxSection_Builder>)setPriorityInboxSegmentedCollapsedWithBoolean:(_Bool)arg1;
- (id <JBTClassicGmailInboxSection_Builder>)setPriorityInboxSegmentedHiddenWhenEmptyWithBoolean:(_Bool)arg1;
- (id <JBTClassicGmailInboxSection_Builder>)setPriorityInboxSegmentedSectionSizeWithInt:(int)arg1;
- (id <JBTClassicGmailInboxSection_Builder>)setSectionTypeWithJBTClassicGmailInboxSection_ClassicGmailInboxSectionType:(JBTClassicGmailInboxSection_ClassicGmailInboxSectionType *)arg1;
@end

