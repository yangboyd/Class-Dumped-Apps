//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDFetchRequestValidator.h"

@interface SDSQLiteFetchRequestValidator : SDFetchRequestValidator
{
}

+ (void)load;
- (void)_validateKeyPath:(id)arg1 allowTransformables:(_Bool)arg2 withActionName:(id)arg3;
- (_Bool)_attemptNilComparisonCheckValidationWithFirstExpression:(id)arg1 secondExpression:(id)arg2 entity:(id)arg3;
- (void)validatePredicateKeyPathExpression:(id)arg1 withEntity:(id)arg2;
- (void)validateComparisonPredicate:(id)arg1 withEntity:(id)arg2;
- (void)validateSortDescriptor:(id)arg1;

@end

