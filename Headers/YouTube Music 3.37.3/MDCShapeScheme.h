//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDCShapeScheming-Protocol.h"

@class MDCShapeCategory;

@interface MDCShapeScheme : NSObject <MDCShapeScheming>
{
    MDCShapeCategory *_smallComponentShape;
    MDCShapeCategory *_mediumComponentShape;
    MDCShapeCategory *_largeComponentShape;
}

@property(retain, nonatomic) MDCShapeCategory *largeComponentShape; // @synthesize largeComponentShape=_largeComponentShape;
@property(retain, nonatomic) MDCShapeCategory *mediumComponentShape; // @synthesize mediumComponentShape=_mediumComponentShape;
@property(retain, nonatomic) MDCShapeCategory *smallComponentShape; // @synthesize smallComponentShape=_smallComponentShape;
- (void).cxx_destruct;
- (id)initWithDefaults:(long long)arg1;
- (id)init;

@end

