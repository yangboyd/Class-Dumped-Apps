//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1PromptViewController.h>

#import <T1Twitter/T1PromptDataSource-Protocol.h>

@class NSArray, NSString, T1PromptImageSpec, T1PromptTextSpec, UIImage;
@protocol T1HiddenRepliesConsumptionEducationPromptViewControllerDelegate;

@interface T1HiddenRepliesConsumptionEducationPromptViewController : T1PromptViewController <T1PromptDataSource>
{
    id <T1HiddenRepliesConsumptionEducationPromptViewControllerDelegate> _delegate;
}

+ (_Bool)shouldShowForAccount:(id)arg1;
@property(nonatomic) __weak id <T1HiddenRepliesConsumptionEducationPromptViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_t1_isFullPromptView;
- (void)_t1_markAsShown;
- (id)calculatedLayoutMetrics;
@property(readonly, nonatomic) CDUnknownBlockType dismissOptionAction;
@property(readonly, nonatomic) _Bool showDismissOption;
@property(readonly, nonatomic) T1PromptTextSpec *secondaryTextSpec;
@property(readonly, nonatomic) T1PromptTextSpec *primaryTextSpec;
@property(readonly, nonatomic) T1PromptImageSpec *imageSpec;
@property(readonly, nonatomic) _Bool showLogo;
@property(readonly, nonatomic) long long promptLayout;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) unsigned long long buttonLayout;
@property(readonly, nonatomic) NSArray *buttonSpecs;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) T1PromptTextSpec *detailTextSpec;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) Class promptViewClass;
@property(readonly) Class superclass;

@end

