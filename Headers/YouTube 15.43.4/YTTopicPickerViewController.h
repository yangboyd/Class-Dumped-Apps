//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDelegate-Protocol.h"
#import "YTGraftingViewController-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTShowTopicPickerViewControllerProtocol-Protocol.h"
#import "YTTopicPickerButtonDisplaying-Protocol.h"
#import "YTTopicPickerViewProtocol-Protocol.h"

@class GIMMe, NSString, YTICommand, YTITopicPickerRenderer, YTPromosheetController, YTTopicPickerCollectionViewController, YTTopicPickerView;
@protocol YTResponder;

@interface YTTopicPickerViewController : UIViewController <UICollectionViewDelegate, YTGraftingViewController, YTResponder, YTTopicPickerViewProtocol, YTTopicPickerButtonDisplaying, YTShowTopicPickerViewControllerProtocol>
{
    YTICommand *_navEndpoint;
    YTITopicPickerRenderer *_renderer;
    YTTopicPickerView *_topicPickerView;
    YTTopicPickerCollectionViewController *_collectionViewController;
    YTPromosheetController *_promosheetController;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)notifyVisibilityToStateControllerAsVisible:(_Bool)arg1;
- (void)sendEventsFromButton:(id)arg1 renderer:(id)arg2;
- (id)navEndpoint;
- (void)dismissTopicPickerWithGlobalNotify:(_Bool)arg1;
- (void)didTapDismissButton:(id)arg1;
- (void)didTapAcceptButton:(id)arg1;
- (void)dismissWithCompletionHandler:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)showTopicPicker;
- (void)dismissViewController;
- (void)showViewController;
- (void)enableAcceptButton:(_Bool)arg1;
- (void)loadCollectionViewController;
- (void)setCollectionViewControllerEntry:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1 renderer:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

