//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AudioDevice : NSObject
{
    _Bool _isInput;
    _Bool _isOutput;
    _Bool _isDefault;
    _Bool _isBuiltIn;
    _Bool _isAirplay;
    NSString *_identifier;
    NSString *_name;
}

@property(readonly) _Bool isAirplay; // @synthesize isAirplay=_isAirplay;
@property(readonly) _Bool isBuiltIn; // @synthesize isBuiltIn=_isBuiltIn;
@property(readonly) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(readonly) _Bool isOutput; // @synthesize isOutput=_isOutput;
@property(readonly) _Bool isInput; // @synthesize isInput=_isInput;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithXalDevice:(struct xal_device_s *)arg1;

@end

