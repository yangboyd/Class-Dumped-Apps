//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/MKAnnotation-Protocol.h>

@class IGLocation, NSString;

@interface IGLocationAnnotation : NSObject <MKAnnotation>
{
    IGLocation *_location;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGLocation *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)initWithLocation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end

