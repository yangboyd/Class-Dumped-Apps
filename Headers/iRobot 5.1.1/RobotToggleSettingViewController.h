//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAssetViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SideAlignButton, UITableView, UIView;

@interface RobotToggleSettingViewController : BaseAssetViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _onOff;
    CDUnknownBlockType _onOffChanged;
    NSString *_localizedTitle;
    NSString *_localizedOffLabel;
    NSString *_localizedOffDetailLabel;
    NSString *_localizedOnLabel;
    NSString *_localizedOnDetailLabel;
    NSString *_localizedHelpLabel;
    NSString *_helpContentIdentifier;
    UITableView *_tableView;
    SideAlignButton *_helpButton;
    UIView *_helpButtonWrapper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *helpButtonWrapper; // @synthesize helpButtonWrapper=_helpButtonWrapper;
@property(nonatomic) __weak SideAlignButton *helpButton; // @synthesize helpButton=_helpButton;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *helpContentIdentifier; // @synthesize helpContentIdentifier=_helpContentIdentifier;
@property(retain, nonatomic) NSString *localizedHelpLabel; // @synthesize localizedHelpLabel=_localizedHelpLabel;
@property(retain, nonatomic) NSString *localizedOnDetailLabel; // @synthesize localizedOnDetailLabel=_localizedOnDetailLabel;
@property(retain, nonatomic) NSString *localizedOnLabel; // @synthesize localizedOnLabel=_localizedOnLabel;
@property(retain, nonatomic) NSString *localizedOffDetailLabel; // @synthesize localizedOffDetailLabel=_localizedOffDetailLabel;
@property(retain, nonatomic) NSString *localizedOffLabel; // @synthesize localizedOffLabel=_localizedOffLabel;
@property(retain, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(copy, nonatomic) CDUnknownBlockType onOffChanged; // @synthesize onOffChanged=_onOffChanged;
@property(nonatomic) _Bool onOff; // @synthesize onOff=_onOff;
- (void)configureAccessibilityForCell:(id)arg1;
- (void)configureAccessibility;
- (void)addItemIfNonNull:(id)arg1 toArray:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)helpButtonTapped:(id)arg1;
- (void)applyCommonConfigToCell:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

