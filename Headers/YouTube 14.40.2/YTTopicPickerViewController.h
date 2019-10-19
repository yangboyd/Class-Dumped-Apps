//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UICollectionViewDelegate.h"
#import "YTGraftingViewController.h"
#import "YTResponder.h"
#import "YTShowTopicPickerViewControllerProtocol.h"
#import "YTTopicPickerButtonDisplaying.h"
#import "YTTopicPickerViewProtocol.h"

@class GIMMe, NSString, YTICommand, YTITopicPickerRenderer, YTPromosheetController, YTTopicPickerCollectionViewController, YTTopicPickerView;

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

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
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

