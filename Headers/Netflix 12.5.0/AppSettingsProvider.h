//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AppSettingsProvider : NSObject
{
    NSArray *_settingsGroupItemArray;
    NSArray *_customLayers;
}

@property(copy, nonatomic) NSArray *customLayers; // @synthesize customLayers=_customLayers;
@property(retain) NSArray *settingsGroupItemArray; // @synthesize settingsGroupItemArray=_settingsGroupItemArray;
- (void).cxx_destruct;
- (void)configureDisplayForTableView:(id)arg1;
- (void)commitItem:(id)arg1 settingsViewController:(id)arg2;
- (id)settingsItemGroup:(unsigned long long)arg1;
- (id)settingsItemAtIndexPath:(id)arg1;
- (unsigned long long)settingsItemCountForGroup:(unsigned long long)arg1;
- (unsigned long long)settingsGroupCount;
- (void)reloadData;
- (id)description;
- (id)iconName;
- (id)title;
- (id)init;

@end

