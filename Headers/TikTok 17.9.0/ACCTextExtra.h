//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCRootModel.h"

@class NSString;

@interface ACCTextExtra : ACCRootModel
{
    long long start;
    long long end;
    NSString *userId;
    NSString *awemeId;
    NSString *hashtagName;
    long long type;
    NSString *_secUserID;
    long long _subtype;
}

+ (id)convertToStudioArray:(id)arg1;
+ (id)createWithStudioArray:(id)arg1;
+ (id)createWithStudio:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long subtype; // @synthesize subtype=_subtype;
@property(copy, nonatomic) NSString *secUserID; // @synthesize secUserID=_secUserID;
@property(nonatomic) long long type; // @synthesize type;
@property(copy, nonatomic) NSString *hashtagName; // @synthesize hashtagName;
@property(copy, nonatomic) NSString *awemeId; // @synthesize awemeId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId;
@property(nonatomic) long long end; // @synthesize end;
@property(nonatomic) long long start; // @synthesize start;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)length;
- (id)convertToStudio;

@end

