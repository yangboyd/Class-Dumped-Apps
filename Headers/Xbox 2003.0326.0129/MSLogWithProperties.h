//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSAbstractLog.h"

@class NSDictionary;

@interface MSLogWithProperties : MSAbstractLog
{
    NSDictionary *_properties;
}

@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)serializeToDictionary;

@end

