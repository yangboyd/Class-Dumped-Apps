//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWAComponentGroup.h>

@class NSDictionary;

@interface GWAComponentGroupAll : GWAComponentGroup
{
    NSDictionary *_uiReferenceToComponentMap;
}

- (void).cxx_destruct;
- (_Bool)hasEmptyRowsInSections:(id)arg1;
- (void)registerWithDependencyGraph:(id)arg1;
- (void)expandSummary;
- (void)summaryTapped;
- (_Bool)componentGroupShouldCollapse;
- (id)uiReferenceToComponentMap;
- (_Bool)isCollapsible;
- (id)sections;
- (id)initWithComponentGroup:(id)arg1 uiReferenceToComponentMetadataMap:(id)arg2 context:(id)arg3;

@end

