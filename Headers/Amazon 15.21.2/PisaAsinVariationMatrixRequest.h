//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PisaRequest.h"

@class NSArray, NSString;

@interface PisaAsinVariationMatrixRequest : PisaRequest
{
    NSString *_asin;
    NSArray *_variableDimensions;
}

@property(readonly, nonatomic) NSArray *variableDimensions; // @synthesize variableDimensions=_variableDimensions;
@property(readonly, nonatomic) NSString *asin; // @synthesize asin=_asin;
- (void).cxx_destruct;
- (id)requestString;
- (id)initWithAsin:(id)arg1 variableDimensions:(id)arg2;
- (Class)responseClass;

@end

