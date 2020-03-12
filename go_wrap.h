/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

// source: go.i

#ifndef SWIG_xapian_WRAP_H_
#define SWIG_xapian_WRAP_H_

class Swig_memory;

class SwigDirector_StemImplementation : public Xapian::StemImplementation
{
 public:
  SwigDirector_StemImplementation(int swig_p);
  virtual ~SwigDirector_StemImplementation();
  virtual std::string operator ()(std::string const &word);
  virtual std::string get_description() const;
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

class SwigDirector_MatchDecider : public Xapian::MatchDecider
{
 public:
  SwigDirector_MatchDecider(int swig_p);
  virtual ~SwigDirector_MatchDecider();
  virtual bool operator ()(Xapian::Document const &doc) const;
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

class SwigDirector_ExpandDecider : public Xapian::ExpandDecider
{
 public:
  SwigDirector_ExpandDecider(int swig_p);
  virtual bool operator ()(std::string const &term) const;
  virtual ~SwigDirector_ExpandDecider();
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

class SwigDirector_KeyMaker : public Xapian::KeyMaker
{
 public:
  SwigDirector_KeyMaker(int swig_p);
  virtual std::string operator ()(Xapian::Document const &doc) const;
  virtual ~SwigDirector_KeyMaker();
  std::string _swig_upcall_name() const {
    return Xapian::KeyMaker::name();
  }
  virtual std::string name() const;
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

class SwigDirector_Stopper : public Xapian::Stopper
{
 public:
  SwigDirector_Stopper(int swig_p);
  virtual bool operator ()(std::string const &term) const;
  virtual ~SwigDirector_Stopper();
  std::string _swig_upcall_get_description() const {
    return Xapian::Stopper::get_description();
  }
  virtual std::string get_description() const;
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

class SwigDirector_RangeProcessor : public Xapian::RangeProcessor
{
 public:
  SwigDirector_RangeProcessor(int swig_p);
  SwigDirector_RangeProcessor(int swig_p, Xapian::valueno slot_, std::string const &str_, unsigned int flags_);
  SwigDirector_RangeProcessor(int swig_p, Xapian::valueno slot_, std::string const &str_);
  SwigDirector_RangeProcessor(int swig_p, Xapian::valueno slot_);
  virtual ~SwigDirector_RangeProcessor();
  Xapian::Query _swig_upcall_Apply(std::string const &begin, std::string const &end) {
    return Xapian::RangeProcessor::operator ()(begin,end);
  }
  virtual Xapian::Query operator ()(std::string const &begin, std::string const &end);
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

class SwigDirector_FieldProcessor : public Xapian::FieldProcessor
{
 public:
  SwigDirector_FieldProcessor(int swig_p);
  virtual ~SwigDirector_FieldProcessor();
  virtual Xapian::Query operator ()(std::string const &str);
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

class SwigDirector_Compactor : public Xapian::Compactor
{
 public:
  SwigDirector_Compactor(int swig_p);
  virtual ~SwigDirector_Compactor();
  void _swig_upcall_set_status(std::string const &table, std::string const &status) {
    Xapian::Compactor::set_status(table,status);
  }
  virtual void set_status(std::string const &table, std::string const &status);
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

class SwigDirector_PostingSource : public Xapian::PostingSource
{
 public:
  SwigDirector_PostingSource(int swig_p);
  virtual ~SwigDirector_PostingSource();
  virtual Xapian::doccount get_termfreq_min() const;
  virtual Xapian::doccount get_termfreq_est() const;
  virtual Xapian::doccount get_termfreq_max() const;
  double _swig_upcall_get_weight() const {
    return Xapian::PostingSource::get_weight();
  }
  virtual double get_weight() const;
  virtual Xapian::docid get_docid() const;
  virtual void next(double min_wt);
  void _swig_upcall_skip_to(Xapian::docid did, double min_wt) {
    Xapian::PostingSource::skip_to(did,min_wt);
  }
  virtual void skip_to(Xapian::docid did, double min_wt);
  bool _swig_upcall_check(Xapian::docid did, double min_wt) {
    return Xapian::PostingSource::check(did,min_wt);
  }
  virtual bool check(Xapian::docid did, double min_wt);
  virtual bool at_end() const;
  std::string _swig_upcall_name() const {
    return Xapian::PostingSource::name();
  }
  virtual std::string name() const;
  void _swig_upcall_reset(Xapian::Database const &db, Xapian::doccount shard_index) {
    Xapian::PostingSource::reset(db,shard_index);
  }
  virtual void reset(Xapian::Database const &db, Xapian::doccount shard_index);
  void _swig_upcall_init(Xapian::Database const &db) {
    Xapian::PostingSource::init(db);
  }
  virtual void init(Xapian::Database const &db);
  std::string _swig_upcall_get_description() const {
    return Xapian::PostingSource::get_description();
  }
  virtual std::string get_description() const;
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

class SwigDirector_ValuePostingSource : public Xapian::ValuePostingSource
{
 public:
  SwigDirector_ValuePostingSource(int swig_p, Xapian::valueno slot_);
  virtual ~SwigDirector_ValuePostingSource();
  Xapian::doccount _swig_upcall_get_termfreq_min() const {
    return Xapian::ValuePostingSource::get_termfreq_min();
  }
  virtual Xapian::doccount get_termfreq_min() const;
  Xapian::doccount _swig_upcall_get_termfreq_est() const {
    return Xapian::ValuePostingSource::get_termfreq_est();
  }
  virtual Xapian::doccount get_termfreq_est() const;
  Xapian::doccount _swig_upcall_get_termfreq_max() const {
    return Xapian::ValuePostingSource::get_termfreq_max();
  }
  virtual Xapian::doccount get_termfreq_max() const;
  double _swig_upcall_get_weight() const {
    return Xapian::PostingSource::get_weight();
  }
  virtual double get_weight() const;
  Xapian::docid _swig_upcall_get_docid() const {
    return Xapian::ValuePostingSource::get_docid();
  }
  virtual Xapian::docid get_docid() const;
  void _swig_upcall_next(double min_wt) {
    Xapian::ValuePostingSource::next(min_wt);
  }
  virtual void next(double min_wt);
  void _swig_upcall_skip_to(Xapian::docid min_docid, double min_wt) {
    Xapian::ValuePostingSource::skip_to(min_docid,min_wt);
  }
  virtual void skip_to(Xapian::docid min_docid, double min_wt);
  bool _swig_upcall_check(Xapian::docid min_docid, double min_wt) {
    return Xapian::ValuePostingSource::check(min_docid,min_wt);
  }
  virtual bool check(Xapian::docid min_docid, double min_wt);
  bool _swig_upcall_at_end() const {
    return Xapian::ValuePostingSource::at_end();
  }
  virtual bool at_end() const;
  std::string _swig_upcall_name() const {
    return Xapian::PostingSource::name();
  }
  virtual std::string name() const;
  void _swig_upcall_reset(Xapian::Database const &db, Xapian::doccount shard_index) {
    Xapian::PostingSource::reset(db,shard_index);
  }
  virtual void reset(Xapian::Database const &db, Xapian::doccount shard_index);
  void _swig_upcall_init(Xapian::Database const &db_) {
    Xapian::ValuePostingSource::init(db_);
  }
  virtual void init(Xapian::Database const &db_);
  std::string _swig_upcall_get_description() const {
    return Xapian::ValuePostingSource::get_description();
  }
  virtual std::string get_description() const;
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

class SwigDirector_ValueWeightPostingSource : public Xapian::ValueWeightPostingSource
{
 public:
  SwigDirector_ValueWeightPostingSource(int swig_p, Xapian::valueno slot_);
  virtual ~SwigDirector_ValueWeightPostingSource();
  Xapian::doccount _swig_upcall_get_termfreq_min() const {
    return Xapian::ValuePostingSource::get_termfreq_min();
  }
  virtual Xapian::doccount get_termfreq_min() const;
  Xapian::doccount _swig_upcall_get_termfreq_est() const {
    return Xapian::ValuePostingSource::get_termfreq_est();
  }
  virtual Xapian::doccount get_termfreq_est() const;
  Xapian::doccount _swig_upcall_get_termfreq_max() const {
    return Xapian::ValuePostingSource::get_termfreq_max();
  }
  virtual Xapian::doccount get_termfreq_max() const;
  double _swig_upcall_get_weight() const {
    return Xapian::ValueWeightPostingSource::get_weight();
  }
  virtual double get_weight() const;
  Xapian::docid _swig_upcall_get_docid() const {
    return Xapian::ValuePostingSource::get_docid();
  }
  virtual Xapian::docid get_docid() const;
  void _swig_upcall_next(double min_wt) {
    Xapian::ValuePostingSource::next(min_wt);
  }
  virtual void next(double min_wt);
  void _swig_upcall_skip_to(Xapian::docid min_docid, double min_wt) {
    Xapian::ValuePostingSource::skip_to(min_docid,min_wt);
  }
  virtual void skip_to(Xapian::docid min_docid, double min_wt);
  bool _swig_upcall_check(Xapian::docid min_docid, double min_wt) {
    return Xapian::ValuePostingSource::check(min_docid,min_wt);
  }
  virtual bool check(Xapian::docid min_docid, double min_wt);
  bool _swig_upcall_at_end() const {
    return Xapian::ValuePostingSource::at_end();
  }
  virtual bool at_end() const;
  std::string _swig_upcall_name() const {
    return Xapian::ValueWeightPostingSource::name();
  }
  virtual std::string name() const;
  void _swig_upcall_reset(Xapian::Database const &db, Xapian::doccount shard_index) {
    Xapian::PostingSource::reset(db,shard_index);
  }
  virtual void reset(Xapian::Database const &db, Xapian::doccount shard_index);
  void _swig_upcall_init(Xapian::Database const &db_) {
    Xapian::ValueWeightPostingSource::init(db_);
  }
  virtual void init(Xapian::Database const &db_);
  std::string _swig_upcall_get_description() const {
    return Xapian::ValueWeightPostingSource::get_description();
  }
  virtual std::string get_description() const;
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

class SwigDirector_MatchSpy : public Xapian::MatchSpy
{
 public:
  SwigDirector_MatchSpy(int swig_p);
  virtual ~SwigDirector_MatchSpy();
  virtual void operator ()(Xapian::Document const &doc, double wt);
  std::string _swig_upcall_name() const {
    return Xapian::MatchSpy::name();
  }
  virtual std::string name() const;
  void _swig_upcall_merge_results(std::string const &serialised) {
    Xapian::MatchSpy::merge_results(serialised);
  }
  virtual void merge_results(std::string const &serialised);
  std::string _swig_upcall_get_description() const {
    return Xapian::MatchSpy::get_description();
  }
  virtual std::string get_description() const;
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

class SwigDirector_LatLongMetric : public Xapian::LatLongMetric
{
 public:
  SwigDirector_LatLongMetric(int swig_p);
  virtual ~SwigDirector_LatLongMetric();
  virtual double pointwise_distance(Xapian::LatLongCoord const &a, Xapian::LatLongCoord const &b) const;
  virtual Xapian::LatLongMetric *clone() const;
  virtual std::string name() const;
  virtual std::string serialise() const;
  virtual Xapian::LatLongMetric *unserialise(std::string const &serialised) const;
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

#endif