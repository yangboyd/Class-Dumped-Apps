//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AWEIMGroupManagementDataManager : NSObject
{
    NSArray *_cellModelList;
    NSArray *_menuList;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *menuList; // @synthesize menuList=_menuList;
@property(copy, nonatomic) NSArray *cellModelList; // @synthesize cellModelList=_cellModelList;
- (void)constructListWithConversation:(id)arg1 setting:(id)arg2;
- (void)updateDataWithConversation:(id)arg1;
- (void)fetchGroupSettingEntryLimitWithConversation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchGroupUpgradeSettingWithConversation:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

