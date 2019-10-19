//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFUIOverlayPickerViewControllerDataSource-Protocol.h"
#import "NFUIOverlayPickerViewControllerDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol SeasonPickerViewControllerDelegateProtocol;

@interface NFUIDisplayPageSeasonSelectorDelegate : NSObject <NFUIOverlayPickerViewControllerDataSource, NFUIOverlayPickerViewControllerDelegate>
{
    _Bool _shouldForceDefaultTheme;
    UIViewController<SeasonPickerViewControllerDelegateProtocol> *_delegate;
}

@property(nonatomic) _Bool shouldForceDefaultTheme; // @synthesize shouldForceDefaultTheme=_shouldForceDefaultTheme;
@property(nonatomic) __weak UIViewController<SeasonPickerViewControllerDelegateProtocol> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)initiallySelectedItem;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInPicker;
- (id)itemStringForRowAtIndexPath:(id)arg1;
- (id)seasonPicker;
- (struct CGRect)modalRect:(id)arg1 withPicker:(id)arg2;
- (id)modalShim:(id)arg1 withPicker:(id)arg2;
- (void)seasonButtonPressed:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

