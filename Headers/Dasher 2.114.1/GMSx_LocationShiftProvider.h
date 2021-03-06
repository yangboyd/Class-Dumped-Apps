//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/LocationPipelineProvider-Protocol.h>

@class NSString;
@protocol GMSMobileMapsLocationService;

@interface GMSx_LocationShiftProvider : NSObject <LocationPipelineProvider>
{
    id <GMSMobileMapsLocationService> _mobileMapsLocationService;
    struct GMSCoordinate _requestCoordinate;
    struct GMSCoordinate _originalCoordinate;
    long long _coefficientsE6[6];
    int _cacheSquareLength;
    int _validSquareLength;
    double _maximumDeviation;
    int _travelMode;
}

+ (_Bool)needsShift:(struct GMSCoordinate)arg1;
+ (id)locationProviderID;
- (void).cxx_destruct;
@property(nonatomic) int travelMode; // @synthesize travelMode=_travelMode;
- (void)reset;
- (_Bool)needsExtraDeviation:(struct GMSCoordinate)arg1;
- (_Bool)needsUpdate:(struct GMSCoordinate)arg1;
- (_Bool)isInsideSquare:(struct GMSCoordinate)arg1 lengthE6:(int)arg2;
- (id)shiftedLocation:(id)arg1;
- (_Bool)applyResponseProto:(id)arg1;
- (void)setRequestCoordinate:(struct GMSCoordinate)arg1;
- (void)updateLocation:(id)arg1 dispatcher:(id)arg2;
- (id)initWithMobileMapsLocationService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

