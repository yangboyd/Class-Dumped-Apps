//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;
@protocol SCMapInstance;

@interface SCGroupStoryMapView : UIView
{
    UIView<SCMapInstance> *_mapView;
    UIImageView *_radiusView;
}

- (void).cxx_destruct;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 hideRadiusView:(_Bool)arg2;
- (void)_setupRadiusViewTintColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 userSession:(id)arg2 tintColor:(id)arg3;

@end

