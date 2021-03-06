//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import <InstagramAppCoreFramework/IGPlacesMapDataSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/MKMapViewDelegate-Protocol.h>

@class IGPlacesMapDataSource, IGSavedMediaCollection, IGUserSession, NSArray, NSString;

@interface IGSaveMapSectionController : IGListGenericSectionController <IGPlacesMapDataSourceDelegate, MKMapViewDelegate>
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    IGPlacesMapDataSource *_dataSource;
    NSArray *_annotations;
    IGSavedMediaCollection *_savedMediaCollection;
    _Bool _fullWidthStyle;
}

- (void).cxx_destruct;
- (void)_configureMapCell:(id)arg1;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)placesMapDataSource:(id)arg1 didUpdateToAnnotations:(id)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (id)initWithUserSession:(id)arg1 savedMediaCollection:(id)arg2 fullWidthStyle:(_Bool)arg3 analyticsModule:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

