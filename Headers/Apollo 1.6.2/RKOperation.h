//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface RKOperation : NSObject
{
    NSString *_method;
    NSString *_path;
    NSDictionary *_parameters;
    CDUnknownBlockType _completion;
}

+ (id)operationWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

