//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCGroupMapViewCarouselItem-Protocol.h"

@class NSString;

@interface SCGroupMapViewPlaceModel : UIView <SCGroupMapViewCarouselItem>
{
    NSString *_title;
    NSString *_subtitle;
    struct CLLocationCoordinate2D _latLng;
}

@property(readonly, nonatomic) struct CLLocationCoordinate2D latLng; // @synthesize latLng=_latLng;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)representedPlaceModel;
- (void)didUnfocus;
@property(readonly, nonatomic) __weak UIView *viewForPage;
- (void)didFocusAnimated:(_Bool)arg1 withMap:(id)arg2 requestLocationOverlayView:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)initWithLatLng:(struct CLLocationCoordinate2D)arg1 title:(id)arg2 subtitle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

