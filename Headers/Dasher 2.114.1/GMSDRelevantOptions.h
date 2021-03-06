//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/NSSecureCoding-Protocol.h>

@class GMSInt32Array;

@interface GMSDRelevantOptions : NSObject <NSSecureCoding>
{
    _Bool _preferAccessibleTransitRelevant;
    _Bool _preferCheaperTransitRelevant;
    GMSInt32Array *_relevantVehicleTypes;
    GMSInt32Array *_relevantFareTypes;
    GMSInt32Array *_relevantFirstLastMileOptions;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) GMSInt32Array *relevantFirstLastMileOptions; // @synthesize relevantFirstLastMileOptions=_relevantFirstLastMileOptions;
@property(readonly, nonatomic) _Bool preferCheaperTransitRelevant; // @synthesize preferCheaperTransitRelevant=_preferCheaperTransitRelevant;
@property(readonly, nonatomic) GMSInt32Array *relevantFareTypes; // @synthesize relevantFareTypes=_relevantFareTypes;
@property(readonly, nonatomic) GMSInt32Array *relevantVehicleTypes; // @synthesize relevantVehicleTypes=_relevantVehicleTypes;
@property(readonly, nonatomic) _Bool preferAccessibleTransitRelevant; // @synthesize preferAccessibleTransitRelevant=_preferAccessibleTransitRelevant;
- (void)setRelevantFirstLastMileOptions:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRelevantOptionsProto:(id)arg1;

@end

