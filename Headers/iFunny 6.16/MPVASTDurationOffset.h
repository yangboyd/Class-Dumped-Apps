//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/MPVASTModel.h>

@class NSString;

@interface MPVASTDurationOffset : MPVASTModel
{
    unsigned long long _type;
    NSString *_offset;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (double)timeIntervalForVideoWithDuration:(double)arg1;
- (id)initWithDictionary:(id)arg1;

@end

