//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MGLAnnotationImage, MGLAnnotationView, MGLMapCamera, MGLMapView, MGLPolygon, MGLPolyline, MGLShape, MGLStyle, MGLUserLocation, NSArray, NSError, UIColor, UIControl, UIView;
@protocol MGLAnnotation, MGLCalloutView;

@protocol MGLMapViewDelegate <NSObject>

@optional
- (void)mapView:(MGLMapView *)arg1 tapOnCalloutForAnnotation:(id <MGLAnnotation>)arg2;
- (void)mapView:(MGLMapView *)arg1 annotation:(id <MGLAnnotation>)arg2 calloutAccessoryControlTapped:(UIControl *)arg3;
- (UIView *)mapView:(MGLMapView *)arg1 rightCalloutAccessoryViewForAnnotation:(id <MGLAnnotation>)arg2;
- (UIView *)mapView:(MGLMapView *)arg1 leftCalloutAccessoryViewForAnnotation:(id <MGLAnnotation>)arg2;
- (id <MGLCalloutView>)mapView:(MGLMapView *)arg1 calloutViewForAnnotation:(id <MGLAnnotation>)arg2;
- (_Bool)mapView:(MGLMapView *)arg1 annotationCanShowCallout:(id <MGLAnnotation>)arg2;
- (void)mapView:(MGLMapView *)arg1 didDeselectAnnotationView:(MGLAnnotationView *)arg2;
- (void)mapView:(MGLMapView *)arg1 didSelectAnnotationView:(MGLAnnotationView *)arg2;
- (void)mapView:(MGLMapView *)arg1 didDeselectAnnotation:(id <MGLAnnotation>)arg2;
- (void)mapView:(MGLMapView *)arg1 didSelectAnnotation:(id <MGLAnnotation>)arg2;
- (void)mapView:(MGLMapView *)arg1 didAddAnnotationViews:(NSArray *)arg2;
- (MGLAnnotationView *)mapView:(MGLMapView *)arg1 viewForAnnotation:(id <MGLAnnotation>)arg2;
- (double)mapView:(MGLMapView *)arg1 lineWidthForPolylineAnnotation:(MGLPolyline *)arg2;
- (UIColor *)mapView:(MGLMapView *)arg1 fillColorForPolygonAnnotation:(MGLPolygon *)arg2;
- (UIColor *)mapView:(MGLMapView *)arg1 strokeColorForShapeAnnotation:(MGLShape *)arg2;
- (double)mapView:(MGLMapView *)arg1 alphaForShapeAnnotation:(MGLShape *)arg2;
- (MGLAnnotationImage *)mapView:(MGLMapView *)arg1 imageForAnnotation:(id <MGLAnnotation>)arg2;
- (void)mapView:(MGLMapView *)arg1 didChangeUserTrackingMode:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)mapView:(MGLMapView *)arg1 didFailToLocateUserWithError:(NSError *)arg2;
- (void)mapView:(MGLMapView *)arg1 didUpdateUserLocation:(MGLUserLocation *)arg2;
- (void)mapViewDidStopLocatingUser:(MGLMapView *)arg1;
- (void)mapViewWillStartLocatingUser:(MGLMapView *)arg1;
- (void)mapView:(MGLMapView *)arg1 didFinishLoadingStyle:(MGLStyle *)arg2;
- (void)mapViewDidFinishRenderingFrame:(MGLMapView *)arg1 fullyRendered:(_Bool)arg2;
- (void)mapViewWillStartRenderingFrame:(MGLMapView *)arg1;
- (void)mapViewDidFinishRenderingMap:(MGLMapView *)arg1 fullyRendered:(_Bool)arg2;
- (void)mapViewWillStartRenderingMap:(MGLMapView *)arg1;
- (void)mapViewDidFailLoadingMap:(MGLMapView *)arg1 withError:(NSError *)arg2;
- (void)mapViewDidFinishLoadingMap:(MGLMapView *)arg1;
- (void)mapViewWillStartLoadingMap:(MGLMapView *)arg1;
- (_Bool)mapView:(MGLMapView *)arg1 shouldChangeFromCamera:(MGLMapCamera *)arg2 toCamera:(MGLMapCamera *)arg3;
- (void)mapView:(MGLMapView *)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapViewRegionIsChanging:(MGLMapView *)arg1;
- (void)mapView:(MGLMapView *)arg1 regionWillChangeAnimated:(_Bool)arg2;
@end

