//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEAwemeModel, AWEGradientView, AWESearchLiveStatusView, UIImageView, UILabel;

@interface AWEGeneralSearchLiveView : UIView
{
    AWEAwemeModel *_liveRoomModel;
    UIImageView *_coverImageView;
    AWESearchLiveStatusView *_liveStatusView;
    UIView *_liveView;
    UIImageView *_roomAuthorIcon;
    UILabel *_roomAuthorLabel;
    AWEGradientView *_gradientView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWEGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UILabel *roomAuthorLabel; // @synthesize roomAuthorLabel=_roomAuthorLabel;
@property(retain, nonatomic) UIImageView *roomAuthorIcon; // @synthesize roomAuthorIcon=_roomAuthorIcon;
@property(nonatomic) __weak UIView *liveView; // @synthesize liveView=_liveView;
@property(retain, nonatomic) AWESearchLiveStatusView *liveStatusView; // @synthesize liveStatusView=_liveStatusView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) AWEAwemeModel *liveRoomModel; // @synthesize liveRoomModel=_liveRoomModel;
- (void)setupUI;
- (void)addLiveView:(id)arg1;
- (void)configWithModel:(id)arg1;
- (id)init;

@end

