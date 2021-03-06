//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAssetTableViewController.h"

@class NSString, UITableViewCell;

@interface MapTroubleshootingViewController : BaseAssetTableViewController
{
    _Bool _isTrainRobotIntroductionRequired;
    int _learningPercentile;
    NSString *_mapId;
    NSString *_mapVersion;
    NSString *_rendererViewId;
    UITableViewCell *_understandMapCell;
    UITableViewCell *_incompleteMapCell;
    UITableViewCell *_looksWrongCell;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isTrainRobotIntroductionRequired; // @synthesize isTrainRobotIntroductionRequired=_isTrainRobotIntroductionRequired;
@property(nonatomic) __weak UITableViewCell *looksWrongCell; // @synthesize looksWrongCell=_looksWrongCell;
@property(nonatomic) __weak UITableViewCell *incompleteMapCell; // @synthesize incompleteMapCell=_incompleteMapCell;
@property(nonatomic) __weak UITableViewCell *understandMapCell; // @synthesize understandMapCell=_understandMapCell;
@property(retain, nonatomic) NSString *rendererViewId; // @synthesize rendererViewId=_rendererViewId;
@property(retain, nonatomic) NSString *mapVersion; // @synthesize mapVersion=_mapVersion;
@property(retain, nonatomic) NSString *mapId; // @synthesize mapId=_mapId;
@property(nonatomic) int learningPercentile; // @synthesize learningPercentile=_learningPercentile;
- (void)configureAccessibility;
- (void)sendMissionCommandWithCommandType:(long long)arg1;
- (void)dismissPersistentMapsModalWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissPersistentMapsModal;
- (void)presentTrainRobotIntroductionViewController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidAppearTheFirstTimeOnly;
- (void)viewDidLoad;

@end

