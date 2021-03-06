//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOBaseContentView.h>

#import "GDKFileCVOUpdateDelegate-Protocol.h"

@class GDADeviceCVO, NSString, UIButton, UIImageView, UILabel, UIView;

@interface GDADeviceCV : GOOBaseContentView <GDKFileCVOUpdateDelegate>
{
    UILabel *_titleLabel;
    UIImageView *_deviceIconImageView;
    UIButton *_overflowButton;
    UIView *_accessibilityView;
    UIView *_borderView;
}

+ (id)borderViewWithFrame:(struct CGRect)arg1;
+ (id)accessibilityView;
+ (id)deviceIconImageView;
+ (id)overflowButtonWithTarget:(id)arg1;
+ (id)titleLabel;
+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIView *accessibilityView; // @synthesize accessibilityView=_accessibilityView;
@property(retain, nonatomic) UIButton *overflowButton; // @synthesize overflowButton=_overflowButton;
@property(retain, nonatomic) UIImageView *deviceIconImageView; // @synthesize deviceIconImageView=_deviceIconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)viewObjectWasUpdated:(id)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)updateViewWithObject:(id)arg1;
- (void)makeConstraints;
- (void)overflowButtonWasPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) GDADeviceCVO *object; // @dynamic object;
@property(readonly) Class superclass;

@end

