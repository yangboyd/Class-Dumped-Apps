//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASMNonNilBaseValidator.h"

@class NSArray;

@interface ASMArgsOfExpectedTypesValidator : ASMNonNilBaseValidator
{
    NSArray *_types;
}

@property(copy, nonatomic) NSArray *types; // @synthesize types=_types;
- (void).cxx_destruct;
- (_Bool)areValidArguments:(id)arg1;
- (id)initWithExpectedTypes:(id)arg1;

@end

