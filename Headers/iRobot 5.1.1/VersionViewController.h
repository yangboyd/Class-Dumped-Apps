//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "FollowIRobotCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DynamicTextLabelCell, FollowIRobotCell, NSString, SocialImageDownloadOperation, SocialMediaContent, UILabel, UITableView;

@interface VersionViewController : BaseViewController <UITableViewDataSource, UITableViewDelegate, FollowIRobotCellDelegate>
{
    _Bool socialMediaLoadedSuccessfully;
    NSString *_assetSku;
    UITableView *_tableView;
    DynamicTextLabelCell *_aboutCell;
    FollowIRobotCell *_followIRobotCell;
    SocialMediaContent *_socialContent;
    SocialImageDownloadOperation *_socialImageDownloadOperation;
    UILabel *_copyrightLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *copyrightLabel; // @synthesize copyrightLabel=_copyrightLabel;
@property(retain, nonatomic) SocialImageDownloadOperation *socialImageDownloadOperation; // @synthesize socialImageDownloadOperation=_socialImageDownloadOperation;
@property(retain, nonatomic) SocialMediaContent *socialContent; // @synthesize socialContent=_socialContent;
@property(retain, nonatomic) FollowIRobotCell *followIRobotCell; // @synthesize followIRobotCell=_followIRobotCell;
@property(retain, nonatomic) DynamicTextLabelCell *aboutCell; // @synthesize aboutCell=_aboutCell;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *assetSku; // @synthesize assetSku=_assetSku;
- (void)configureAccessibility;
- (void)followIRobotCell:(id)arg1 didSelectButtonAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)gotoNextScreen:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)downloadSocialMediaImages;
- (void)downloadSocialMediaContent;
- (void)viewDidAppearTheFirstTimeOnly;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

