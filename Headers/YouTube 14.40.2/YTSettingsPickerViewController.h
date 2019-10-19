//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTStyledViewController.h"

#import "YTPageStyleProvider.h"

@class NSArray, NSString, YTCollectionViewController, YTSettingsSectionController;

@interface YTSettingsPickerViewController : YTStyledViewController <YTPageStyleProvider>
{
    NSString *_navTitle;
    NSString *_pickerSectionTitle;
    YTCollectionViewController *_collectionViewController;
    YTSettingsSectionController *_settingsController;
    unsigned long long _selectedItemIndex;
    NSArray *_rows;
    id <YTSettingsPickerDelegate> _delegate;
    NSArray *_items;
}

@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <YTSettingsPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long pageStyle;
- (void)loadView;
- (id)initWithNavTitle:(id)arg1 pickerSectionTitle:(id)arg2 rows:(id)arg3 selectedItemIndex:(unsigned long long)arg4 parentResponder:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

