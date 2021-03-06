/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDate, NSString;

@interface SAEmailSearch : SADomainCommand {
}

@property(copy) NSDate * endDate;
@property(copy) NSString * fromEmail;
@property(copy) NSDate * startDate;
@property int status;
@property(copy) NSString * subject;
@property(copy) NSString * timeZoneId;
@property(copy) NSString * toEmail;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)endDate;
- (id)fromEmail;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setEndDate:(id)arg1;
- (void)setFromEmail:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setSubject:(id)arg1;
- (void)setTimeZoneId:(id)arg1;
- (void)setToEmail:(id)arg1;
- (id)startDate;
- (int)status;
- (id)subject;
- (id)timeZoneId;
- (id)toEmail;

@end
