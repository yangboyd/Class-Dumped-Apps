//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVSeriesData-Protocol.h"

@class NSArray;

@interface GAVArraySeriesData : NSObject <GAVSeriesData>
{
    NSArray *_array;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *array; // @synthesize array=_array;
- (unsigned long long)count;
- (id)datumAtIndex:(unsigned long long)arg1;
- (id)initWithArray:(id)arg1;
- (id)init;

@end

