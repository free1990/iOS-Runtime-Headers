/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSSStyle, TSSStylePropertyChangeSet, TSWPCharacterStylePropertyChangeSet;

@interface TSWPStyleDiff : TSPObject {
    TSWPCharacterStylePropertyChangeSet *_changeSet;
    BOOL _definedChangeSet;
    BOOL _definedStyle;
    TSSStylePropertyChangeSet *_previouslyAppliedChangeSet;
    TSSStyle *_style;
}

@property(retain) TSSStylePropertyChangeSet * changeSet;
@property(retain) TSSStylePropertyChangeSet * previouslyAppliedChangeSet;
@property(retain) TSSStyle * style;

- (id)changeSet;
- (id)changedPropertyNames;
- (id)description;
- (void)didInitFromSOS;
- (unsigned int)hash;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 changeSet:(id)arg2;
- (id)initWithContext:(id)arg1 style:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToStyleDiff:(id)arg1;
- (void)loadFromArchive:(const struct StyleDiffArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct CharacterStylePropertyChangeSetArchive {} *x6; struct ParagraphStylePropertyChangeSetArchive {} *x7; }*)arg1 unarchiver:(id)arg2;
- (id)previouslyAppliedChangeSet;
- (void)saveToArchive:(struct StyleDiffArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct CharacterStylePropertyChangeSetArchive {} *x6; struct ParagraphStylePropertyChangeSetArchive {} *x7; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setChangeSet:(id)arg1;
- (void)setPreviouslyAppliedChangeSet:(id)arg1;
- (void)setStyle:(id)arg1;
- (id)style;
- (id)styleDiffForTable:(int)arg1 storage:(id)arg2 currentObject:(id)arg3;

@end
