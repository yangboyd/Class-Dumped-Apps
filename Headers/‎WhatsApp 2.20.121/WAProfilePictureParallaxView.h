//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImage, UIImageView, WAActivityIndicatorView, WAChatJID;
@protocol WAProfilePictureJID, WAProfilePictureParallaxViewDelegate;

@interface WAProfilePictureParallaxView : UIView
{
    _Bool _displayingPlaceholder;
    _Bool _needsLoadPicture;
    UIView *_backgroundView;
    UIView *_verticalEdgeView;
    UIView *_dimmerView;
    WAActivityIndicatorView *_activityIndicator;
    double _centerOffset;
    _Bool _pictureFetchAllowed;
    _Bool _picturePlaceholderAllowed;
    _Bool _isShowingProfilePicture;
    id <WAProfilePictureParallaxViewDelegate> _delegate;
    WAChatJID<WAProfilePictureJID> *_chatJID;
    UIButton *_editButton;
    UIImageView *_imageView;
    double _maximumHeight;
    UIImage *_placeHolderImage;
    double _visibleHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double visibleHeight; // @synthesize visibleHeight=_visibleHeight;
@property(nonatomic) _Bool isShowingProfilePicture; // @synthesize isShowingProfilePicture=_isShowingProfilePicture;
@property(nonatomic) _Bool picturePlaceholderAllowed; // @synthesize picturePlaceholderAllowed=_picturePlaceholderAllowed;
@property(nonatomic) _Bool pictureFetchAllowed; // @synthesize pictureFetchAllowed=_pictureFetchAllowed;
@property(retain, nonatomic) UIImage *placeHolderImage; // @synthesize placeHolderImage=_placeHolderImage;
@property(nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) WAChatJID<WAProfilePictureJID> *chatJID; // @synthesize chatJID=_chatJID;
@property(nonatomic) __weak id <WAProfilePictureParallaxViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resetTemporaryPicture;
- (void)showTemporaryPicture:(id)arg1;
- (void)hideActivityIndicator;
- (void)showActivityIndicator;
@property(nonatomic) _Bool showVerticalTrailingEdge;
- (void)reloadSelfAsTableHeaderView;
- (void)loadPlaceholderImage;
- (void)loadProfilePicture:(id)arg1;
- (void)detectFaceInImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadPSAProfilePicture;
- (void)setImage:(id)arg1;
- (id)image;
@property(readonly, nonatomic) _Bool hasImage;
- (void)profilePictureChanged:(id)arg1;
- (void)reloadPictureAndRequestRefresh:(_Bool)arg1;
- (void)reloadPictureIfNeeded;
- (void)getFullsizePictureRequestDidComplete:(id)arg1;
- (void)handleReceivedFullsizeProfilePicture:(id)arg1;
@property(nonatomic) _Bool editButtonHidden;
@property(readonly, nonatomic) double defaultVisibleHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

