//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDCContainerScheming-Protocol.h"

@class MDCSemanticColorScheme, MDCShapeScheme, MDCTypographyScheme;

@interface MDCContainerScheme : NSObject <MDCContainerScheming>
{
    MDCSemanticColorScheme *_colorScheme;
    MDCTypographyScheme *_typographyScheme;
    MDCShapeScheme *_shapeScheme;
}

@property(retain, nonatomic) MDCShapeScheme *shapeScheme; // @synthesize shapeScheme=_shapeScheme;
@property(retain, nonatomic) MDCTypographyScheme *typographyScheme; // @synthesize typographyScheme=_typographyScheme;
@property(retain, nonatomic) MDCSemanticColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void).cxx_destruct;
- (id)init;

@end

