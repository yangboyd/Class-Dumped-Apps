//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDCAlertScheming-Protocol.h"

@protocol MDCButtonScheming, MDCColorScheming, MDCTypographyScheming;

@interface MDCAlertScheme : NSObject <MDCAlertScheming>
{
    id <MDCColorScheming> _colorScheme;
    id <MDCTypographyScheming> _typographyScheme;
    id <MDCButtonScheming> _buttonScheme;
    double _cornerRadius;
    double _elevation;
}

@property(nonatomic) double elevation; // @synthesize elevation=_elevation;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) id <MDCButtonScheming> buttonScheme; // @synthesize buttonScheme=_buttonScheme;
@property(retain, nonatomic) id <MDCTypographyScheming> typographyScheme; // @synthesize typographyScheme=_typographyScheme;
@property(retain, nonatomic) id <MDCColorScheming> colorScheme; // @synthesize colorScheme=_colorScheme;
- (void).cxx_destruct;
- (id)init;

@end

