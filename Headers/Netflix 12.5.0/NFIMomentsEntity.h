//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CORenewableObject.h"

@class NSDictionary;

@interface NFIMomentsEntity : CORenewableObject
{
    NSDictionary *_momentsData;
}

+ (id)falcorKeyPathsForUpdateMap;
+ (id)falcorKeyPathMap;
@property(readonly, nonatomic) NSDictionary *momentsData; // @synthesize momentsData=_momentsData;
- (void).cxx_destruct;
- (void)setMomentsData:(id)arg1;

@end

