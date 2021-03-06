//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol IESLiveMTAudienceListActions;

@interface IESLiveMTAudienceListErrorView : UIView
{
    UIImageView *_emptyImageView;
    UILabel *_emptyLabel;
    UILabel *_emptySecondLabel;
    id <IESLiveMTAudienceListActions> _actionCreator;
    UIButton *_tryAgain;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *tryAgain; // @synthesize tryAgain=_tryAgain;
@property(retain, nonatomic) id <IESLiveMTAudienceListActions> actionCreator; // @synthesize actionCreator=_actionCreator;
@property(retain, nonatomic) UILabel *emptySecondLabel; // @synthesize emptySecondLabel=_emptySecondLabel;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) UIImageView *emptyImageView; // @synthesize emptyImageView=_emptyImageView;
- (void)tryNetAgain;
- (void)updateContentInEmptyWithModel:(id)arg1;
- (void)updateContentWithModel:(id)arg1 showTryAgain:(_Bool)arg2;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

