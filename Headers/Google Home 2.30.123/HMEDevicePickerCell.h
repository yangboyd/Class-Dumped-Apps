//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCollectionViewCell.h"

@class HMETile;
@protocol HMEUnifiedDevice;

@interface HMEDevicePickerCell : MDCCollectionViewCell
{
    _Bool _updatableDeviceTypeFeatureEnabled;
    _Bool _remoteCastStateFeaturesEnabled;
    id <HMEUnifiedDevice> _device;
    HMETile *_tile;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMETile *tile; // @synthesize tile=_tile;
@property(nonatomic) _Bool remoteCastStateFeaturesEnabled; // @synthesize remoteCastStateFeaturesEnabled=_remoteCastStateFeaturesEnabled;
@property(retain, nonatomic) id <HMEUnifiedDevice> device; // @synthesize device=_device;
@property(nonatomic) _Bool updatableDeviceTypeFeatureEnabled; // @synthesize updatableDeviceTypeFeatureEnabled=_updatableDeviceTypeFeatureEnabled;
- (id)formattedString:(id)arg1 font:(id)arg2 textColor:(id)arg3 lineHeight:(double)arg4;
- (void)setupForDevice;
- (id)accessibilityLabel;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

