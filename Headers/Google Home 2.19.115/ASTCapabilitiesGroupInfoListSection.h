//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTCapabilitiesSection.h"

@class NSMutableDictionary;

@interface ASTCapabilitiesGroupInfoListSection : ASTCapabilitiesSection
{
    NSMutableDictionary *_streamItemUUIDToGroupInfoMap;
}

- (void).cxx_destruct;
- (id)viewControllerParameters;
- (id)streamItemForGroupInfo:(id)arg1;
- (void)didSelectGroupInfo:(id)arg1;
- (void)setUpSectionWithGroups:(id)arg1;
- (_Bool)didSelectStreamItem:(id)arg1;
- (id)initWithInsets:(struct UIEdgeInsets)arg1 groupInfoList:(id)arg2;

@end

